int __fastcall sub_80846E4(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  int v3; // r4@5
  unsigned __int8 v4; // r0@5
  int v5; // r4@5
  char v6; // r0@5
  int v8; // [sp+0h] [bp-10h]@1
  int v9; // [sp+Ch] [bp-4h]@7

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  LoadWordFromTwoHalfwords((int)v2 + 10, &v8);
  if ( !*((_WORD *)v2 + 11) )
  {
    FieldObjectClearAnim(v8);
    ++*((_WORD *)v2 + 11);
  }
  call_via_r3(v1, v2, v8, *(&gUnknown_0839B4C8 + *((_WORD *)v2 + 4)));
  if ( *((_WORD *)v2 + 4) != 3 || FieldEffectActiveListContains(49) << 24 )
  {
    *(_BYTE *)v8 &= 0x7Fu;
  }
  else
  {
    v3 = v8;
    v4 = npc_running_behaviour_by_direction(*(_BYTE *)(v8 + 24) & 0xF);
    npc_set_running_behaviour_etc(v3, v4);
    v5 = v8;
    v6 = npc_running_behaviour_by_direction(*(_BYTE *)(v8 + 24) & 0xF);
    sub_805C774(v5, v6);
    DestroyTask(v1);
  }
  return v9;
}
