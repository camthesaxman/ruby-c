int __fastcall BerryTreeTimeUpdate(int a1)
{
  int v1; // r6@1
  int v2; // r2@1
  int v3; // r4@2
  int v4; // r7@2
  int v5; // r5@7
  int v6; // r1@8
  __int16 v7; // r0@9
  int v8; // r0@14
  int v10; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  do
  {
    v3 = 8 * v2 + 33713468;
    v4 = v2 + 1;
    if ( *(_BYTE *)(8 * v2 + 0x2026D3C)
      && *(_BYTE *)(8 * v2 + 0x2026D3D) & 0x7F
      && !(*(_BYTE *)(8 * v2 + 0x2026D3D) & 0x80) )
    {
      if ( v1 < 71 * (GetStageDurationByBerryType(*(_BYTE *)(8 * v2 + 0x2026D3C)) & 0xFFFF) )
      {
        v5 = v1;
        if ( v1 )
        {
          v6 = *(_WORD *)(v3 + 2);
          if ( v6 <= v1 )
          {
            while ( 1 )
            {
              v5 -= v6;
              *(_WORD *)(v3 + 2) = GetStageDurationByBerryType(*(_BYTE *)v3);
              if ( !BerryTreeGrow(v3) )
                break;
              if ( (*(_BYTE *)(v3 + 1) & 0x7F) == 5 )
                *(_WORD *)(v3 + 2) *= 4;
              if ( !v5 )
                break;
              v8 = *(_WORD *)(v3 + 2);
              v6 = v8;
              if ( v8 > v5 )
              {
                v7 = v8 - v5;
                goto _080B4BF6;
              }
            }
          }
          else
          {
            v7 = v6 - v1;
_080B4BF6:
            *(_WORD *)(v3 + 2) = v7;
          }
        }
      }
      else
      {
        *(_DWORD *)v3 = 0;
        *(_DWORD *)(v3 + 4) = 0;
      }
    }
    v2 = v4;
  }
  while ( v4 <= 127 );
  return v10;
}
