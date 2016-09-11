signed int check_feebas()
{
  unsigned __int8 v0; // r7@1
  unsigned __int16 v1; // r0@8
  int v2; // r1@8
  signed int result; // r0@10
  unsigned int v4; // r0@11
  int v5; // r5@11
  char *v6; // r4@12
  unsigned int v7; // r0@12
  int v8; // r1@17
  unsigned int v9; // r5@17
  int v10; // [sp+0h] [bp-2Ch]@12
  char v11; // [sp+Ch] [bp-20h]@2
  __int16 v12; // [sp+Eh] [bp-1Eh]@2

  v0 = 0;
  if ( v2025738 != 8704 )
    goto _08084B38;
  GetXYCoordsOneStepInFrontOfPlayer(&v11, &v12);
  *(_WORD *)&v11 -= 7;
  v12 -= 7;
  if ( v12 >= 46 && v12 <= 91 )
    v0 = 1;
  if ( v12 >= 92 && v12 <= 139 )
    v0 = 2;
  v1 = (unsigned __int16)Random() % 0x64u;
  if ( v1 <= 0x31u )
  {
    v4 = sub_8084B74(v202850A, v2);
    v5 = 0;
    do
    {
      v6 = (char *)&v10 + 2 * v5;
      v7 = (unsigned __int16)sub_8084B54(v4) % 0x1BFu;
      *(_WORD *)v6 = v7;
      if ( !(v7 << 16) )
        *(_WORD *)v6 = 447;
      v4 = (*(_WORD *)v6 - 1) & 0xFFFF;
      if ( v4 > 2 )
      {
        v4 = (v5 + 1) << 24;
        v5 = (v5 + 1) & 0xFF;
      }
    }
    while ( v5 != 6 );
    v8 = sub_8084984(*(__int16 *)&v11, v12, v0) & 0xFFFF;
    v9 = 0;
    while ( v8 != *((_WORD *)&v10 + v9) )
    {
      v9 = (v9 + 1) & 0xFF;
      if ( v9 > 5 )
        goto _08084B38;
    }
    result = 1;
  }
  else
  {
_08084B38:
    result = 0;
  }
  return result;
}
