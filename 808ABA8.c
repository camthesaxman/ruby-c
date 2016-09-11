int __fastcall sub_808ABA8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v2; // r2@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)sub_807D770() == 1 )
  {
    v202FF84 = GetMonData((int)&dword_3004360[25 * (unsigned __int8)byte_3005CE0], 11, v2);
    call_via_r0(dword_3005CE4);
    DestroyTask(v1);
  }
  return v4;
}
