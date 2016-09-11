int __fastcall sub_809E8F0(unsigned __int8 a1, char a2, _BYTE *a3)
{
  _BYTE *v3; // r9@1
  int v4; // r8@1
  char v5; // r4@1
  int v6; // r6@1
  unsigned int v7; // r2@1
  unsigned int v8; // r7@1
  signed int v9; // r0@2
  int v10; // r0@8
  int v11; // r7@11
  signed int v13; // [sp+0h] [bp-28h]@1
  unsigned int v14; // [sp+4h] [bp-24h]@6
  int v15; // [sp+24h] [bp-4h]@0

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v13 = 1;
  audio_play(5u);
  LOBYTE(v6) = *v3;
  v7 = 0;
  v8 = LOBYTE(dword_3004B20[10 * v4 + 2]) << 24;
  do
  {
    v9 = ((char)v6 + v5) << 24;
    v6 = ((char)v6 + v5) & 0xFF;
    if ( v9 <= (signed int)v8 )
    {
      if ( v9 >> 24 < 0 )
        v6 = v8 >> 24;
    }
    else
    {
      LOBYTE(v6) = 0;
    }
    v14 = v7;
    if ( sub_809F760(33652752, (unsigned __int8)v6) << 16 )
      break;
    if ( (char)v6 == 4 )
      break;
    v10 = (v14 << 24) + 0x1000000;
    v7 = (unsigned int)v10 >> 24;
  }
  while ( v10 >> 24 <= 3 );
  if ( *v3 == 4 && (char)v6 != 4 && (v11 = 4 * v4, !v201807C) || (v11 = 4 * v4, HIWORD(dword_3004B20[10 * v4 + 8]) == 1) )
  {
    sub_80A1488(2, (unsigned __int8)v6);
    sub_80A1654(2, (unsigned __int8)v6);
    HIWORD(dword_3004B20[2 * (v11 + v4) + 8]) = 0;
    v13 = 0;
  }
  if ( *v3 != 4 && (char)v6 == 4 && !v201807C )
  {
    sub_80A1488(-2, (unsigned __int8)v6);
    sub_80A1654(-2, (unsigned __int8)v6);
  }
  *v3 = v6;
  if ( v3 == (_BYTE *)33652857 )
    sub_80A1C30(0);
  else
    sub_80A1C30(1);
  if ( v13 )
    sub_80A0428(33652752, v3);
  BgFrame_FillTileMap(v4);
  return v15;
}
