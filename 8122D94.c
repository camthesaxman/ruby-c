int __fastcall sub_8122D94(unsigned __int8 a1, int a2, int a3)
{
  int v3; // r4@1
  int v5; // [sp+4h] [bp-4h]@0

  v3 = a1;
  if ( GetMonData((int)&dword_3004360[25 * (unsigned __int8)byte_3005CE0], 45, a3) )
  {
    LOWORD(dword_3004B20[10 * v3 + 4]) = 1;
    sub_806E750(1u, (int)&gUnknown_08401810);
  }
  else
  {
    LOWORD(dword_3004B20[10 * v3 + 4]) = 0;
    sub_806E750(0, (int)&gUnknown_08401810);
  }
  return v5;
}
