_BOOL4 __fastcall sub_8133CCC(int a1, int a2, int a3)
{
  unsigned int v3; // r5@1
  int v4; // r2@1

  v3 = (unsigned __int16)GetMonData((int)&dword_3004360[25 * (unsigned __int8)byte_3005CE0], 58, a3);
  return (unsigned __int16)GetMonData((int)&dword_3004360[25 * (unsigned __int8)byte_3005CE0], 57, v4) >= (v3 / 5 & 0xFFFF);
}
