-- load defaults i.e lua_lsp
require("nvchad.configs.lspconfig").defaults()

local lspconfig = require "lspconfig"

-- EXAMPLE
local servers = { "html", "cssls" }
local nvlsp = require "nvchad.configs.lspconfig"

-- lsps with default config
for _, lsp in ipairs(servers) do
  lspconfig[lsp].setup {
    on_attach = nvlsp.on_attach,
    on_init = nvlsp.on_init,
    capabilities = nvlsp.capabilities,
  }
end


lspconfig.pyright.setup({
  on_attach = function(client, bufnr)
    -- Customize further if needed, for example:
    -- Set up keybindings, etc.
  end,
})

-- configuring single server, example: typescript
-- lspconfig.ts_ls.setup {
--   on_attach = nvlsp.on_attach,
--   on_init = nvlsp.on_init,
--   capabilities = nvlsp.capabilities,
-- }
lspconfig.clangd.setup({
    cmd = { "clangd" },
    filetypes = { "c",  "objc", "objcpp", "h", "cpp", "cc" },
    root_dir = lspconfig.util.root_pattern("compile_commands.json", ".git"),
    on_attach = function(client, bufnr)
        -- Optional: Set keybindings for LSP actions
        local opts = { noremap = true, silent = true }
        vim.api.nvim_buf_set_keymap(bufnr, "n", "gd", "<Cmd>lua vim.lsp.buf.definition()<CR>", opts)
        vim.api.nvim_buf_set_keymap(bufnr, "n", "K", "<Cmd>lua vim.lsp.buf.hover()<CR>", opts)
    end,
})
