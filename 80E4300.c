int __fastcall sub_80E4300(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r3@3
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8076BE0() << 24 )
  {
    move_anim_task_del(v1);
  }
  else
  {
    v2 = &dword_3004B20[10 * v1];
    *((_WORD *)v2 + 4) = *(_WORD *)(4 * v202F7C8 + 0x2017800) & 1;
    *(_BYTE *)(4 * v202F7C8 + 0x2017800) |= 1u;
    *v2 = (int)sub_80E4368;
    --v202F7B2;
  }
  return v4;
}
