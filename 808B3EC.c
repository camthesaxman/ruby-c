int __fastcall sub_808B3EC(int a1, int a2, int a3)
{
  unsigned __int16 v3; // r0@4
  int v4; // r1@4
  int (*v5)(); // r0@4
  int v7; // [sp+14h] [bp-4h]@0

  v202F390 |= 0x80u;
  if ( v202E8DC )
  {
    sub_806AF4C(0, 0, (int)sub_808B4A4, -1);
    v5 = sub_808B3A0;
  }
  else
  {
    if ( v202E8F8 )
      sub_80A9538(v202E8F8, 1);
    v3 = GetMonData((int)&dword_3004360[25 * (unsigned __int8)byte_3005CE0], 12, a3);
    sub_80A9424(v3, 1);
    sub_80A2DF8(&dword_3004360[25 * (unsigned __int8)byte_3005CE0], v4);
    SetMonData((int)&dword_3004360[25 * (unsigned __int8)byte_3005CE0], 12, 33745144);
    CreateTask((int)sub_808B25C, 5);
    v202F390 &= 0x7Fu;
    v5 = sub_806AEDC;
  }
  SetMainCallback2((int)v5);
  return v7;
}
