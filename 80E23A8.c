int __fastcall unref_sub_80E23A8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r8@1
  unsigned int v2; // r5@1
  int *v3; // r4@1
  char v4; // r9@3
  char v5; // r10@3
  int v7; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = &dword_3004B20[10 * a1];
  if ( !*((_WORD *)v3 + 4) )
  {
    *((_WORD *)v3 + 6) = word_3004B00[0];
    *((_WORD *)v3 + 7) = word_3004B02;
    *((_WORD *)v3 + 8) = word_3004B04;
    *((_WORD *)v3 + 5) = word_3004B06;
    *((_WORD *)v3 + 9) = word_3004B08;
    *((_WORD *)v3 + 10) = word_3004B0A;
    *((_WORD *)v3 + 11) = word_3004B0C;
  }
  ++*((_WORD *)v3 + 4);
  v4 = v202F7C8;
  v5 = v202F7C9;
  if ( *((_WORD *)v3 + 6) & 0x100 )
    v2 = 0xFFFF;
  if ( *((_WORD *)v3 + 6) & 1 )
    v2 |= 1 << IndexOfSpritePaletteTag(*(_WORD *)(dword_2020018[17 * (unsigned __int8)byte_3004340[v202F7C8]] + 2)) << 16;
  if ( *((_WORD *)v3 + 7) & 0x100 )
    v2 |= 1 << v4 << 16;
  if ( *((_WORD *)v3 + 8) & 0x100 )
    v2 |= 1 << v5 << 16;
  TintPlttBuffer(v2, *((_BYTE *)v3 + 18), *((_BYTE *)v3 + 20), *((_BYTE *)v3 + 22));
  if ( *((_WORD *)v3 + 4) == *((_WORD *)v3 + 5) )
  {
    UnfadePlttBuffer(v2);
    move_anim_task_del(v1);
  }
  return v7;
}
