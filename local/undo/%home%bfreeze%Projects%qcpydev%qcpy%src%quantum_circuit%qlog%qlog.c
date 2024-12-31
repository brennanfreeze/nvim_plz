Vim�UnDo� 䟜�Re�������!ă�V��m
�����=H   �           H      7   0   7   7   /    gi��   
 _�                             ����                                                                                                                                                                                                                                                                                                                                       7           v   =    gi�    �      	   �   1       const char *gate_names[] = {   *  [QLOG_ENTRY_GATE_IDENTITY] = "IDENTITY",   *  [QLOG_ENTRY_GATE_HADAMARD] = "HADAMARD",   &  [QLOG_ENTRY_GATE_PAULIX] = "PAULIX",   &  [QLOG_ENTRY_GATE_PAULIY] = "PAULIY",   &  [QLOG_ENTRY_GATE_PAULIZ] = "PAULIZ",   $  [QLOG_ENTRY_GATE_PHASE] = "PHASE",     [QLOG_ENTRY_GATE_S] = "S",      [QLOG_ENTRY_GATE_SDG] = "SDG",     [QLOG_ENTRY_GATE_T] = "T",      [QLOG_ENTRY_GATE_TDG] = "TDG",     [QLOG_ENTRY_GATE_RZ] = "RZ",     [QLOG_ENTRY_GATE_RY] = "RY",     [QLOG_ENTRY_GATE_RX] = "RX",     [QLOG_ENTRY_GATE_SX] = "SX",   "  [QLOG_ENTRY_GATE_SXDG] = "SXDG",     [QLOG_ENTRY_GATE_U] = "U",     [QLOG_ENTRY_GATE_CX] = "CX",     [QLOG_ENTRY_GATE_CH] = "CH",     [QLOG_ENTRY_GATE_CY] = "CY",     [QLOG_ENTRY_GATE_CZ] = "CZ",      [QLOG_ENTRY_GATE_CRX] = "CRX",      [QLOG_ENTRY_GATE_CRY] = "CRY",      [QLOG_ENTRY_GATE_CRZ] = "CRZ",      [QLOG_ENTRY_GATE_CR1] = "CR1",      [QLOG_ENTRY_GATE_CCX] = "CCX",      [QLOG_ENTRY_GATE_QFT] = "QFT",   "  [QLOG_ENTRY_GATE_RCCX] = "RCCX",   "  [QLOG_ENTRY_GATE_RC3X] = "RC3X",   "  [QLOG_ENTRY_GATE_SWAP] = "SWAP",      [QLOG_ENTRY_GATE_RXX] = "RXX",      [QLOG_ENTRY_GATE_RZZ] = "RZZ",   &  [QLOG_ENTRY_GATE_CUSTOM] = "CUSTOM",   :  [QLOG_ENTRY_GATE_CUSTOMCONTROLLED] = "CUSTOMCONTROLLED",   $  [QLOG_ENTRY_GATE_MULTI] = "MULTI",   0  [QLOG_ENTRY_GATE_CUSTOMBLOCK] = "CUSTOMBLOCK",   8  [QLOG_ENTRY_GATE_CUSTOMALGORITHM] = "CUSTOMALGORITHM",   };       const char *gate_types[] = {   &  [QLOG_ENTRY_TYPE_SINGLE] = "SINGLE",   .  [QLOG_ENTRY_TYPE_CONTROLLED] = "CONTROLLED",   $  [QLOG_ENTRY_TYPE_MULTI] = "MULTI",   $  [QLOG_ENTRY_TYPE_BLOCK] = "BLOCK",   ,  [QLOG_ENTRY_TYPE_ALGORITHM] = "ALGORITHM",   };       K#define GATE_TYPE_TO_STRING (qlog_entry_gate) (gate_names[qlog_entry_gate])5��           0               �                     5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          Wstruct gate_matrix_def* gate_matrix_init(uint8_t size, complex_64 **gate_matrix_gate) {5��    �                      3      X               5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          h  struct gate_matrix_def *gate_matrix = (struct gate_matrix_def*)malloc(sizeof(struct gate_matrix_def));5��    �                      3      i               5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          '  gate_matrix->gate_matrix_size = size;5��    �                      3      (               5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          m  gate_matrix->gate_matrix_gate = (complex_64**)malloc((gate_matrix->gate_matrix_size) * sizeof(complex_64));5��    �                      3      n               5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          '  if (!gate_matrix->gate_matrix_gate) {5��    �                      3      (               5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �              return NULL;5��    �                      3                     5�_�      	              �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �            }5��    �                      3                     5�_�      
           	   �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          n  memcpy(gate_matrix->gate_matrix_gate, gate_matrix_gate, gate_matrix->gate_matrix_size * sizeof(complex_64));5��    �                      3      o               5�_�   	              
   �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          ;  for (int i = 0; i < gate_matrix->gate_matrix_size; ++i) {5��    �                      3      <               5�_�   
                 �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          =    for (int j = 0; j < gate_matrix->gate_matrix_size; ++i) {5��    �                      3      >               5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          m      printf("%f %fi\n", gate_matrix->gate_matrix_gate[i][j].real, gate_matrix->gate_matrix_gate[i][j].imag);5��    �                      3      n               5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �              }5��    �                      3                     5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �            }5��    �                      3                     5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �            return gate_matrix;5��    �                      3                     5�_�                    �        ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          }5��    �                      3                     5�_�                    �        ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �           5��    �                      3                     5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          >void gate_matrix_delete(struct gate_matrix_def *gate_matrix) {5��    �                      3      ?               5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          &  free(gate_matrix->gate_matrix_gate);5��    �                      3      '               5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          '  gate_matrix->gate_matrix_gate = NULL;5��    �                      3      (               5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �            free(gate_matrix);5��    �                      3                     5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �            gate_matrix = NULL;5��    �                      3                     5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          	  return;5��    �                      3      
               5�_�                    �        ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          }5��    �                      3                     5�_�                    �        ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �           5��    �                      3                     5�_�                    �        ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          Cuint8_t gate_matrix_get_size(struct gate_matrix_def *gate_matrix) {5��    �                      3      D               5�_�                    �        ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          '  return gate_matrix->gate_matrix_size;5��    �                      3      (               5�_�                    �        ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          }5��    �                      3                     5�_�                    �        ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��    �   �   �           5��    �                      3                     5�_�                    9   �    ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi    �   8   :   �      �qlog_append_res qlog_append(struct qlog_def *qlog, uint8_t *qubits, uint8_t num_qubits, int type, int gate, struct complex_64 **gate_matrix) {5��    8   �                  �                     �    8   �                  �                     �    8   �                  �                     �    8   �                  �                     �    8   �                  �                     �    8   �                  �                     �    8   �                  �                     �    8   �                  �                     �    8   �                  �                     �    8   �                  �                     �    8   �                  �                     �    8                     �                     �    8   ~                  �                     �    8   }                  �                     �    8   |                  �                     �    8   {                  �                     �    8   z                  �                     �    8   y                  �                     �    8   x                  �                     �    8   w                  �                     �    8   v                  �                     �    8   u                  �                     �    8   t                  �                     �    8   s                  �                     �    8   r                  �                     �    8   q                  �                     �    8   p                  �                     �    8   o                  �                     �    8   n                  �                     �    8   m                  �                     �    8   l                  �                     �    8   k                  �                     �    8   j                  �                     5�_�                     C   t    ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi¢    �   B   D   �      v  qlog->qlog_entries[qlog->qlog_size] = qlog_entry_init(qubits, num_qubits, type, gate, qlog->qlog_size, gate_matrix);5��    B   h                                       �    B   g                                       5�_�      !               ^   �    ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi«    �   ]   _   �      �struct qlog_entry_def* qlog_entry_init(uint8_t *qubits, uint8_t num_qubits, int type, int gate, uint8_t qlog_qubits, struct complex_64 **gate_matrix_gate) {5��    ]   �                  
                     �    ]   �                  
                     �    ]   �                  
                     �    ]   �                  
                     �    ]   �                  
                     �    ]   �                  
                     �    ]   �                  
                     �    ]   �                  
                     �    ]   �                  
                     �    ]   �                  
                     �    ]   �                  

                     �    ]   �                  	
                     �    ]   �                  
                     �    ]   �                  
                     �    ]   �                  
                     �    ]   �                  
                     �    ]   �                  
                     �    ]   �                  
                     �    ]   �                  
                     �    ]   �                  
                     �    ]   �                   
                     �    ]   �                  �	                     �    ]   �                  �	                     �    ]   �                  �	                     �    ]   �                  �	                     �    ]                     �	                     �    ]   ~                  �	                     �    ]   }                  �	                     �    ]   |                  �	                     �    ]   {                  �	                     �    ]   z                  �	                     �    ]   y                  �	                     �    ]   x                  �	                     �    ]   w                  �	                     �    ]   v                  �	                     �    ]   u                  �	                     �    ]   t                  �	                     �    ]   s                  �	                     5�_�       #           !   k   X    ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi±    �   j   l   �      Z  qlog_entry->qlog_entry_gate_matrix = gate_matrix_init(num_qubits * 2, gate_matrix_gate);5��    j   F                                       5�_�   !   $   "       #   {       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   z   |   �      Gqlog_entry_gate qlog_entry_qg_name(struct qlog_entry_def *qlog_entry) {5��    z                     �                     �    z                     �                    5�_�   #   %           $          ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��    �   ~   �   �      Gqlog_entry_type qlog_entry_qg_type(struct qlog_entry_def *qlog_entry) {5��    ~                     (                     �    ~                     '                     �    ~                     &                     �    ~                     %                     �    ~   
                  $                     �    ~   	                  #                     �    ~                     "                     �    ~                     !                     �    ~                                           �    ~                                          �    ~                                          �    ~                                          �    ~                                          �    ~                                          �    ~                                         �    ~                                        5�_�   $   &           %   k   H    ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   j   l   �      H  qlog_entry->qlog_entry_gate_matrix = gate_matrix_init(num_qubits * 2);5��    j   H                                       5�_�   %   '           &   k   J    ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   j   l   �      J  qlog_entry->qlog_entry_gate_matrix = gate_matrix_init(num_qubits * 2);//5��    j   H                                       5�_�   &   (           '   k       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��    �   j   l   �      H  qlog_entry->qlog_entry_gate_matrix = gate_matrix_init(num_qubits * 2);5��    j                     �                     5�_�   '   )           (   �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          Dconst char* get_qlog_entry_gate(struct qlog_entry_def *qlog_entry) {5��    �                      �      E               5�_�   (   *           )   �       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          1  return gate_names[qlog_entry->qlog_entry_gate];5��    �                      �      2               5�_�   )   +           *   �        ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          }5��    �                      �                     5�_�   *   ,           +   �        ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �           5��    �                      �                     5�_�   +   -           ,   �        ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          Iconst char* get_qlog_entry_gate_type(struct qlog_entry_def *qlog_entry) {5��    �                      �      J               5�_�   ,   .           -   �        ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          6  return gate_types[qlog_entry->qlog_entry_gate_type];5��    �                      �      7               5�_�   -   /           .   �        ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   �   �          }5��    �                      �                     5�_�   .   0           /   �        ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��   
 �   �   �           5��    �                      �                     5�_�   /   1           0   {       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   z   |        5��    z                      �      I               5�_�   0   2           1   {       ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   z   |        5��    z                      �      &               5�_�   1   3           2   {        ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   z   |        5��    z                      �                     5�_�   2   4           3   {        ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   z   |        5��    z                      �                     5�_�   3   5           4   {        ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   z   |        5��    z                      �      I               5�_�   4   6           5   {        ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   z   |        5��    z                      �      +               5�_�   5   7           6   {        ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��     �   z   |        5��    z                      �                     5�_�   6               7   {        ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi��   	 �   z   |        5��    z                      �                     5�_�   !           #   "   {   C    ����                                                                                                                                                                                                                                                                                                                                                  v   =    gi»     �   z   |        5��    z                      �      H               5��