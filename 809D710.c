int __fastcall sub_809D710(int a1, __int16 a2, __int16 a3)
{
  int v3; // r9@1
  __int16 v4; // r4@1
  __int16 v5; // r5@1
  int v6; // r6@1
  int result; // r0@1
  int v8; // [sp+0h] [bp-50h]@1
  __int16 v9; // [sp+18h] [bp-38h]@1
  __int16 v10; // [sp+1Ah] [bp-36h]@1
  int v11; // [sp+1Ch] [bp-34h]@1
  int v12; // [sp+20h] [bp-30h]@1
  int *v13; // [sp+24h] [bp-2Ch]@1
  int v14; // [sp+28h] [bp-28h]@1
  int v15; // [sp+2Ch] [bp-24h]@1
  int v16; // [sp+30h] [bp-20h]@1
  unsigned int v17; // [sp+34h] [bp-1Ch]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v16 = 0;
  v6 = *(_DWORD *)a1;
  v17 = v17 & 0xFFFF0000 | *(&gSpriteImageSizes[4 * ((unsigned int)*(_BYTE *)(*(_DWORD *)a1 + 1) >> 6)]
                           + ((unsigned int)*(_BYTE *)(*(_DWORD *)a1 + 3) >> 6));
  v9 = -1;
  v10 = *(_WORD *)(a1 + 20);
  v11 = v6;
  v12 = *(_DWORD *)(a1 + 8);
  v13 = &v16;
  v14 = *(_DWORD *)(a1 + 12);
  v15 = *(_DWORD *)(a1 + 16);
  memcpy(&v8, &v9, 24);
  result = (unsigned __int8)CreateSprite((int)&v8, v4, v5);
  gSprites[68 * result + 44] |= 0x40u;
  gSprites[68 * result + 63] &= 0xFBu;
  *((_DWORD *)&unk_2020010 + 17 * result) = *(_DWORD *)(v3 + 4);
  return result;
}
