int __fastcall sub_80C9720(unsigned __int8 a1)
{
  unsigned int v1; // r3@1
  unsigned int v2; // r4@2
  signed int v3; // r2@2
  signed int v4; // r8@2
  signed int v5; // r9@3
  signed int v6; // r7@7
  signed int v7; // r4@8
  _BYTE *v8; // r0@8
  unsigned __int16 v10; // [sp+0h] [bp-34h]@1
  unsigned __int16 v11; // [sp+2h] [bp-32h]@1
  int v12; // [sp+4h] [bp-30h]@1
  int v13; // [sp+8h] [bp-2Ch]@1
  int v14; // [sp+Ch] [bp-28h]@1
  int v15; // [sp+10h] [bp-24h]@3
  int v16; // [sp+30h] [bp-4h]@13

  v12 = a1;
  v13 = (*v202E828 + 7) & 0xFFFF;
  v14 = (*(_DWORD *)(v202E828 + 4) + 7) & 0xFFFF;
  PlayerGetDestCoords(&v10, &v11);
  v1 = (v10 - 7) & 0xFFFF;
  if ( (signed __int16)(v10 - 7) <= (signed __int16)v10 + 7 )
  {
    do
    {
      v2 = (v11 - 5) & 0xFFFF;
      v3 = (v11 - 5) << 16;
      v4 = v1 << 16;
      if ( (signed __int16)(v11 - 5) <= (signed __int16)v11 + 5 )
      {
        v15 = 7;
        v5 = (signed __int16)v1;
        do
        {
          if ( v15 > v5 || v5 >= (signed __int16)v13 || v3 >> 16 < 7 || (v6 = v2 << 16, v3 >> 16 >= (signed __int16)v14) )
          {
            v7 = v2 << 16;
            v8 = sub_8056BA0(SHIWORD(v4), SHIWORD(v7));
            v6 = v7;
            if ( v8 && (unsigned __int8)sub_80C9688((int)v8, v4 >> 16, v7 >> 16) == 1 )
              sub_80C9838(v12, (signed __int16)(HIWORD(v4) - v10));
          }
          v2 = (unsigned int)(v6 + 0x10000) >> 16;
          v3 = v2 << 16;
        }
        while ( (signed __int16)v2 <= (signed __int16)v11 + 5 );
      }
      v1 = (unsigned int)(v4 + 0x10000) >> 16;
    }
    while ( (v4 + 0x10000) >> 16 <= (signed __int16)v10 + 7 );
  }
  return v16;
}
