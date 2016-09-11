int __fastcall sub_80A8C0C(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r4@1
  int v3; // r7@1
  int v4; // r0@1
  unsigned int v5; // r8@1
  __int16 v6; // r5@1
  char *v7; // r9@2
  int v8; // r4@2
  char *v9; // r3@4
  int v10; // r0@4
  int v11; // r2@11
  int *v12; // r3@11
  int *v13; // r5@11
  int *v14; // r3@14
  int v15; // r1@16
  __int16 v16; // r0@16
  int v17; // r0@17
  int v19; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_BYTE *)v2 + 16);
  v4 = *((_WORD *)v2 + 6) + *((_WORD *)v2 + 14);
  *((_WORD *)v2 + 14) = v4;
  v5 = (unsigned int)(v4 << 16) >> 24;
  v6 = sine(v5, *((_WORD *)v2 + 5));
  if ( !*((_WORD *)v2 + 4) )
  {
    *(_WORD *)&gSprites[68 * v3 + 36] = v6;
    v7 = gSprites;
    v8 = 16 * v3;
    goto _080A8CAA;
  }
  if ( battle_side_get_owner(*((_BYTE *)v2 + 18)) << 24 )
  {
    v9 = &gSprites[68 * v3];
    v10 = v6;
    v7 = gSprites;
    v8 = 16 * v3;
    if ( v6 < 0 )
      v10 = -v6;
    goto _080A8CA6;
  }
  v9 = &gSprites[68 * v3];
  v10 = v6;
  v7 = gSprites;
  v8 = 16 * v3;
  if ( v6 < 0 )
_080A8CA6:
    v10 = -v10;
  *((_WORD *)v9 + 19) = v10;
_080A8CAA:
  if ( v5 > 0x7F
    && (v11 = 4 * v1, v12 = &dword_3004B20[10 * v1], v13 = dword_3004B20, !*((_WORD *)v12 + 15))
    && *((_WORD *)v12 + 16) == 1
    || v5 <= 0x7E
    && (v11 = 4 * v1, v14 = &dword_3004B20[10 * v1], v13 = dword_3004B20, *((_WORD *)v14 + 15) == 1)
    && !*((_WORD *)v14 + 16) )
  {
    v15 = (int)&v13[2 * (v11 + v1)];
    *(_WORD *)(v15 + 30) ^= 1u;
    *(_WORD *)(v15 + 32) ^= 1u;
    v16 = *(_WORD *)(v15 + 14) - 1;
    *(_WORD *)(v15 + 14) = v16;
    if ( !v16 )
    {
      v17 = (int)&v7[4 * (v8 + v3)];
      *(_WORD *)(v17 + 36) = 0;
      *(_WORD *)(v17 + 38) = 0;
      move_anim_task_del(v1);
    }
  }
  return v19;
}
