signed int __fastcall move_anim_start_t3(unsigned __int8 a1, char a2, char a3, int a4, __int16 a5)
{
  int v5; // r6@1
  char v6; // r9@1
  char v7; // r10@1
  unsigned int v8; // r3@1
  unsigned int v9; // r5@1
  signed int result; // r0@3
  int *v11; // r1@11

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4 << 24;
  v9 = v8 >> 24;
  if ( !(v8 >> 24) && a5 & 0x80 )
  {
    *(_BYTE *)(a1 + 0x2024E84) = a5 & 0x7F;
    return 1;
  }
  if ( !(*(_BYTE *)(4 * a1 + 0x2017800) & 4) )
    goto LABEL_14;
  if ( !(sub_803163C(v8 >> 24) << 24) )
    return 1;
  if ( *(_BYTE *)(4 * v5 + 0x2017800) & 4 && v9 == 2 && gSprites[68 * *(_BYTE *)(v5 + 33704928) + 62] & 4 )
  {
    refresh_graphics_maybe(v5, 1);
    sub_80324E0(v5);
    result = 1;
  }
  else
  {
LABEL_14:
    v202F7C8 = v6;
    v202F7C9 = v7;
    v2017840 = a5;
    move_something(&gBattleAnims_Unknown1, v9, 0);
    v11 = &dword_3004B20[10 * (unsigned __int8)CreateTask(sub_80315E8, 10)];
    *((_WORD *)v11 + 4) = v5;
    *(_BYTE *)(12 * *((_WORD *)v11 + 4) + 0x2017810) |= 0x20u;
    result = 0;
  }
  return result;
}
