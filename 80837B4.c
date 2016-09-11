int __fastcall sub_80837B4(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = sub_800820C();
  if ( v2 << 24 == GetLinkPlayerCount_2() << 24 )
  {
    sub_8007F4C();
    dword_3004B20[10 * v1] = (int)sub_80837EC;
  }
  return v4;
}
