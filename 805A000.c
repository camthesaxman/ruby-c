int __fastcall sub_805A000(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r4@1
  unsigned __int8 v4; // r0@2
  __int16 v5; // r0@2
  unsigned __int8 v6; // r0@3

  v2 = a1;
  v3 = a2;
  v202E85E = 1;
  if ( FieldObjectClearAnimIfSpecialAnimFinished(a2) << 24 )
  {
    audio_play(10);
    v4 = sub_806084C(*(_BYTE *)(v3 + 24) & 0xF);
    FieldObjectSetSpecialAnim(v3, v4);
    v5 = *(_WORD *)(v2 + 10) + 1;
    *(_WORD *)(v2 + 10) = v5;
    if ( v5 > 1 )
    {
      v202E85E = 0;
      v202E859 |= 0x20u;
      v6 = FindTaskIdByFunc(sub_8059FB4);
      DestroyTask(v6);
    }
  }
  return 0;
}
