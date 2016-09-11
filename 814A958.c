int __fastcall sub_814A958(unsigned __int8 a1)
{
  signed int v1; // r4@1
  int v2; // r7@1
  signed int v3; // r2@1
  signed int v4; // r1@1
  int v5; // r0@1
  signed int v6; // r3@1
  signed int v7; // r5@3
  int v8; // r7@9
  int v10; // [sp+0h] [bp-24h]@1
  int v11; // [sp+20h] [bp-4h]@0

  v10 = a1;
  v203A380 = 0;
  v203A384 = 2;
  v203A380 = -1;
  v1 = 33792904;
  v2 = 1;
  v3 = 1;
  v4 = a1;
  v5 = (a1 - 1) << 16;
  v6 = (unsigned int)v5 >> 16;
  if ( v5 >> 16 > 7 )
  {
    do
    {
      v6 = (signed __int16)v6;
      if ( (signed __int16)v6 <= 31 )
      {
        v7 = v10 << 16;
        if ( v4 <= 39 || v6 <= 8 )
        {
          *(_DWORD *)v1 = 0;
          *(_DWORD *)(v1 + 4) = 34;
          *(_WORD *)v1 = v3;
          v3 = (unsigned int)((v3 << 16) + 0x80000) >> 16;
        }
        else
        {
          *(_DWORD *)v1 = 0;
          *(_DWORD *)(v1 + 4) = 105;
          *(_WORD *)v1 = v3 - 32 + (v6 & 0xFFF8);
          v3 = ((signed __int16)v3 + (v6 & 0x18)) & 0xFFFF;
        }
      }
      else
      {
        *(_DWORD *)v1 = 0;
        *(_DWORD *)(v1 + 4) = 105;
        *(_WORD *)v1 = v3;
        v3 = (unsigned int)((v3 << 16) + 0x200000) >> 16;
        v7 = v10 << 16;
      }
      v1 += 8;
      v2 = (v2 + 1) & 0xFF;
      v6 = ((v7 >> 16) - (signed __int16)v3) & 0xFFFF;
    }
    while ( (signed __int16)(HIWORD(v7) - v3) > 7 );
  }
  *(_DWORD *)v1 = 0;
  *(_DWORD *)(v1 + 4) = 66;
  *(_WORD *)v1 = v6 + v3 - 7;
  v8 = (v2 + 1) & 0xFF;
  if ( v203A3D0 != 64 )
    SetSubspriteTables((int)&gSprites[68 * v203A3D0], (int)&gSubspriteTables_842F5C0 + 8 * v8);
  if ( v203A3D1 != 64 )
    SetSubspriteTables((int)&gSprites[68 * v203A3D1], (int)&gSubspriteTables_842F5C0 + 8 * v8);
  return v11;
}
