int __fastcall sub_8084478(int a1, int a2, _BYTE *a3)
{
  int v3; // r6@1
  int v4; // r5@1
  unsigned __int8 v5; // r0@3
  char v6; // r0@3
  int *v7; // r4@3
  int *v8; // r4@5
  unsigned __int8 v9; // r0@5
  char v10; // r0@5

  v3 = a2;
  v4 = (int)a3;
  if ( !(FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive(a3) << 24)
    || FieldObjectClearAnimIfSpecialAnimFinished((_BYTE *)v4) << 24 )
  {
    v5 = npc_running_behaviour_by_direction(*(_BYTE *)(v4 + 24) & 0xF);
    npc_set_running_behaviour_etc(v4, v5);
    v6 = npc_running_behaviour_by_direction(*(_BYTE *)(v4 + 24) & 0xF);
    sub_805C774(v4, v6);
    sub_805C754(v4);
    v7 = &dword_30048A0[9 * v202E85D];
    if ( !(FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive(v7) << 24)
      || FieldObjectClearAnimIfSpecialAnimFinished(v7) << 24 )
    {
      sub_80597E8();
      v8 = &dword_30048A0[9 * v202E85D];
      v9 = GetOppositeDirection(*(_BYTE *)(v4 + 24) & 0xF);
      v10 = GetFaceDirectionAnimId(v9);
      FieldObjectSetSpecialAnim(v8, v10);
      ++*(_WORD *)(v3 + 8);
    }
  }
  return 0;
}
