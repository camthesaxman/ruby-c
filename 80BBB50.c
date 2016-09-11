int __fastcall sub_80BBB50(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  FieldObjectTurn((int)&dword_30048A0[9 * v202E85D], 2u);
  if ( (unsigned __int8)sub_807D770() == 1 )
  {
    script_env_2_enable_and_set_ctx_running();
    DestroyTask(v1);
  }
  return v3;
}
