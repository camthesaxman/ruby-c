int __fastcall s4F_execute_movement(int a1)
{
  int v1; // r5@1
  unsigned __int16 v2; // r0@1
  __int16 v3; // r4@1
  int v4; // r0@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  v3 = VarGet(v2);
  v4 = script_read_word(v1);
  exec_movement((unsigned __int8)v3, v2025739, v2025738, v4);
  v202E8B6 = v3;
  return 0;
}
