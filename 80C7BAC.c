signed int __fastcall sub_80C7BAC(unsigned __int8 a1, __int16 a2, __int16 a3)
{
  __int16 v3; // r6@1
  __int16 v4; // r7@1
  __int16 v5; // r8@1
  int v6; // r4@1
  __int16 *v7; // r1@3
  int *v8; // r0@3
  int v9; // r0@5
  int v10; // r2@5
  int v11; // r3@5
  int v12; // r5@5
  int v13; // r1@5
  int v14; // r3@5
  int v15; // r5@5
  signed int v16; // r5@5
  __int16 v17; // r0@6
  __int16 v18; // r1@6
  char *v19; // r4@6
  char v20; // r0@6
  signed int result; // r0@6
  __int16 v22; // [sp+0h] [bp-30h]@3

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = v2038800 + 8 * a1;
  if ( *(_BYTE *)(v6 + 4) && *(_BYTE *)(v6 + 4) != 4 )
  {
    v7 = &v22;
    v8 = (int *)&gSpriteTemplate_83D608C;
  }
  else
  {
    v7 = &v22;
    v8 = (int *)&gSpriteTemplate_83D60A4;
  }
  v10 = *v8;
  v11 = v8[1];
  v12 = v8[2];
  v9 = (int)(v8 + 3);
  *(_DWORD *)v7 = v10;
  *((_DWORD *)v7 + 1) = v11;
  *((_DWORD *)v7 + 2) = v12;
  v13 = (int)(v7 + 6);
  v14 = *(_DWORD *)(v9 + 4);
  v15 = *(_DWORD *)(v9 + 8);
  *(_DWORD *)v13 = *(_DWORD *)v9;
  *(_DWORD *)(v13 + 4) = v14;
  *(_DWORD *)(v13 + 8) = v15;
  v22 = *(_BYTE *)(v6 + 4) + 4864;
  v16 = (unsigned __int8)CreateSprite((int)&v22, 0, 0);
  if ( v16 == 64 )
  {
    result = 64;
  }
  else
  {
    v17 = *(_WORD *)v6 + 7;
    v18 = *(_WORD *)(v6 + 2) + 7;
    v19 = &gSprites[68 * v16];
    *((_WORD *)v19 + 23) = v3;
    v19[62] |= 2u;
    sub_8060388(v17 + v4, v18 + v5, (_WORD *)v19 + 16, (_WORD *)v19 + 17);
    sub_80C7D14(v19);
    v20 = sub_80C7A08(v3);
    StartSpriteAffineAnim((int)v19, v20);
    result = v16;
  }
  return result;
}
