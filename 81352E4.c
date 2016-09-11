int __fastcall sub_81352E4(int a1, int a2, int a3)
{
  signed int v3; // r7@1
  unsigned __int16 v4; // r8@2
  int v5; // r2@2
  unsigned __int16 v6; // r6@2
  int v7; // r2@2
  unsigned __int8 v8; // r4@2
  int v9; // r2@2
  unsigned __int16 v10; // r0@2
  int v11; // r6@4
  unsigned __int16 *v12; // r4@5
  char v14; // [sp+10h] [bp-3Ch]@2
  char v15; // [sp+1Ch] [bp-30h]@2
  unsigned __int8 v16; // [sp+28h] [bp-24h]@1
  int v17; // [sp+48h] [bp-4h]@14

  v16 = 0;
  v3 = 0;
  do
  {
    v4 = GetMonData((int)&dword_3004360[25 * v3], 65, a3);
    v6 = GetMonData((int)&dword_3004360[25 * v3], 12, v5);
    v8 = GetMonData((int)&dword_3004360[25 * v3], 56, v7);
    v10 = GetMonData((int)&dword_3004360[25 * v3], 57, v9);
    sub_8135200(v4, v6, v10, v202E8DC, v8, &v14, &v15, &v16);
    ++v3;
  }
  while ( v3 <= 5 );
  if ( v16 > 2u )
  {
    v202E8CC = 0;
    v20253F8 = v20253F8 & 0xFE | v202E8DC & 1;
  }
  else
  {
    gStringVar1 = -1;
    v202E8CC = 1;
    v16 = 0;
    v11 = sub_813509C();
    if ( (unsigned __int16)gBattleTowerBanlist[0] != 0xFFFF )
    {
      v12 = (unsigned __int16 *)gBattleTowerBanlist;
      do
      {
        v16 = sub_81350E0(*v12, v16, v11);
        ++v12;
      }
      while ( *v12 != 0xFFFF );
    }
    if ( v16 )
    {
      if ( v16 & 1 )
        StringAppend(&gStringVar1, &gUnknown_08400E2E);
      else
        StringAppend(&gStringVar1, &gUnknown_08400E2C);
      StringAppend(&gStringVar1, &gUnknown_08400E36);
    }
    else
    {
      StringAppend(&gStringVar1, &gUnknown_08400E2C);
      StringAppend(&gStringVar1, &gUnknown_08400E32);
    }
  }
  return v17;
}
