int __fastcall sub_814151C(unsigned __int8 a1)
{
  int v1; // r7@1
  signed int v2; // r8@1
  int v3; // r6@1
  int *v4; // r5@1
  signed int v5; // r0@1
  char *v6; // r2@8
  int v7; // r4@8
  int *v8; // r3@10
  int v9; // r4@14
  char *v10; // r1@17
  char *v11; // r1@19
  int v13; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = *(_BYTE *)(v202F7C8 + 0x2024BE0);
  v4 = &dword_3004B20[10 * a1];
  v5 = *((_WORD *)v4 + 14);
  if ( v5 == 1 )
  {
    refresh_graphics_maybe(v202F7C8, *((_BYTE *)v4 + 30), *(_BYTE *)(v202F7C8 + 0x2024BE0));
    ++*((_WORD *)v4 + 14);
    return v13;
  }
  if ( v5 > 1 )
  {
    if ( v5 != 2 )
      return v13;
    *((_WORD *)v4 + 4) += 1280;
    if ( battle_side_get_owner(v202F7C8) << 24 )
    {
      *(_WORD *)&gSprites[68 * v3 + 36] -= *((_WORD *)v4 + 4) << 16 >> 24;
      v9 = 16 * v3;
    }
    else
    {
      *(_WORD *)&gSprites[68 * v3 + 36] += *((_WORD *)v4 + 4) << 16 >> 24;
      v9 = 16 * v3;
    }
    LOWORD(dword_3004B20[10 * v1 + 2]) = LOBYTE(dword_3004B20[10 * v1 + 2]);
    if ( (unsigned __int8)battle_side_get_owner(v202F7C8) )
    {
      v10 = &gSprites[4 * (v9 + v3)];
      if ( (signed int)*((_WORD *)v10 + 18) <= 0 )
      {
        *((_WORD *)v10 + 18) = 0;
        goto _081416B0;
      }
    }
    else
    {
      v11 = &gSprites[4 * (v9 + v3)];
      if ( (signed int)*((_WORD *)v11 + 18) >= 0 )
      {
        *((_WORD *)v11 + 18) = 0;
        v2 = 1;
      }
    }
    if ( !v2 )
      return v13;
_081416B0:
    move_anim_task_del(v1);
    return v13;
  }
  if ( !*((_WORD *)v4 + 14) )
  {
    *((_WORD *)v4 + 15) = word_3004B00[0];
    *((_WORD *)v4 + 4) += 1280;
    if ( battle_side_get_owner(v202F7C8) << 24 )
    {
      v6 = gSprites;
      *(_WORD *)&gSprites[68 * v3 + 36] += *((_WORD *)v4 + 4) << 16 >> 24;
      v7 = 16 * v3;
    }
    else
    {
      v7 = 16 * v3;
      *(_WORD *)&gSprites[68 * v3 + 36] -= *((_WORD *)v4 + 4) << 16 >> 24;
      v6 = gSprites;
    }
    v8 = &dword_3004B20[10 * v1];
    *((_WORD *)v8 + 4) = *((_BYTE *)v8 + 8);
    if ( (unsigned int)(*(_WORD *)&v6[4 * (v7 + v3) + 32] + *(_WORD *)&v6[4 * (v7 + v3) + 36] + 32) > 0x130 )
      ++*((_WORD *)v8 + 14);
  }
  return v13;
}
