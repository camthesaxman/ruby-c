void Start()
{
  _R0 = 18;
  __asm { MSR             CPSR_cf, R0 }
  _R0 = 31;
  __asm { MSR             CPSR_cf, R0 }
  v3007FFC = IntrMain;
  AgbMain();
}
