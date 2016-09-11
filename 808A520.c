int sub_808A520()
{
  int v0; // r2@1
  unsigned __int16 v1; // r0@4
  int v2; // r1@4
  int v4; // [sp+10h] [bp-4h]@0

  v0 = 33747848;
  v202F390 |= 0x80u;
  if ( v202E8DC )
  {
    sub_806AF4C(0, 255, (int)sub_808A5BC, -1);
  }
  else
  {
    if ( v202E8F8 )
      sub_80A9538(v202E8F8, 1);
    v1 = GetMonData((int)&dword_3004360[25 * (unsigned __int8)byte_3005CE0], 12, v0);
    sub_80A9424(v1, 1);
    sub_80A2DF8(&dword_3004360[25 * (unsigned __int8)byte_3005CE0], v2);
    SetMonData((int)&dword_3004360[25 * (unsigned __int8)byte_3005CE0], 12, 33745144);
    sub_806AF4C(0, 255, (int)sub_8089CD4, 0);
  }
  SetMainCallback2((int)sub_808A4D4);
  return v4;
}
