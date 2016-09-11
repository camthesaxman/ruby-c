int __fastcall sub_81416C4(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  signed int v3; // r0@1
  signed __int16 v4; // r2@8
  __int16 v5; // r0@11
  __int16 v6; // r1@12
  int v7; // r0@14
  int v9; // [sp+0h] [bp-10h]@14
  int v10; // [sp+Ch] [bp-4h]@15

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 19);
  if ( v3 == 1 )
  {
    v5 = *((_WORD *)v2 + 5);
    *((_WORD *)v2 + 5) = v5 + 1;
    if ( v5 > 1 )
    {
      *((_WORD *)v2 + 5) = 0;
      v6 = *((_WORD *)v2 + 4) + 1;
      *((_WORD *)v2 + 4) = v6;
      v4000052 = (v6 << 8) | (16 - v6);
      if ( *((_WORD *)v2 + 4) == 16 )
        ++*((_WORD *)v2 + 19);
    }
  }
  else if ( v3 > 1 )
  {
    if ( v3 == 2 )
    {
      v7 = 32 * *(_WORD *)&gSprites[68 * *(_BYTE *)(v202F7C8 + 0x2024BE0) + 4] & 0x7FFF;
      v9 = 0;
      v40000D4 = &v9;
      v40000D8 = v7 + 100728832;
      v40000DC = -2063597056;
      sub_80324E0(v202F7C8);
      move_anim_task_del(v1);
    }
  }
  else if ( !*((_WORD *)v2 + 19) )
  {
    if ( (unsigned __int8)battle_get_per_side_status_permutated(v202F7C8) == 1 )
      v4 = 16194;
    else
      v4 = 16196;
    v4000050 = v4;
    v4000052 = 16;
    ++HIWORD(dword_3004B20[10 * v1 + 9]);
  }
  return v10;
}
