int __fastcall sub_808A3F8(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // r0@2
  unsigned int v5; // r4@2
  unsigned __int8 v6; // r0@2
  int v7; // r2@2
  int v9; // [sp+4h] [bp-4h]@0

  if ( itemid_is_mail(v203855E, a2, a3, a4) << 24 )
  {
    v4 = CreateTask((int)sub_808A330, 0) << 24;
    v5 = v4 >> 24;
    v202F390 |= 0x80u;
    sub_806BD58(BYTE3(v4));
    sub_806C994(v5, byte_3005CE0);
    sub_806BF74(v5, 0);
    v6 = sub_806CA38(v5);
    if ( !(GetMonData((int)&dword_3004360[25 * v6], 12, v7) << 24) )
    {
      SetMainCallback2((int)sub_808A34C);
      return v9;
    }
    DestroyTask(v5);
  }
  v202F390 |= 0x80u;
  if ( v203855E )
  {
    sub_806AF4C(0, 255, (int)sub_808A2AC, -1);
    SetMainCallback2((int)sub_808A358);
  }
  else
  {
    sub_806AF4C(0, 255, (int)sub_8089D94, 5);
    SetMainCallback2((int)sub_808A3A4);
  }
  return v9;
}
