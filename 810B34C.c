int __fastcall task08_080C9820(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r5@1
  unsigned int v3; // r6@1
  int *v4; // r4@1
  int *v5; // r1@4
  int (*v6)(); // r0@4
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  script_env_2_enable();
  v202E85E = 1;
  v4 = &dword_30048A0[9 * v202E85D];
  if ( !(FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive(v4) << 24)
    || FieldObjectClearAnimIfSpecialAnimFinished(v4) << 24 )
  {
    if ( v202E83F == 5 )
    {
      FieldEffectStart(0x3Bu);
      v5 = &dword_3004B20[10 * v2];
      v6 = sub_810B428;
    }
    else
    {
      sub_8059BF4();
      FieldObjectSetSpecialAnim(v4, 57);
      v5 = &dword_3004B20[10 * v3];
      v6 = sub_810B3DC;
    }
    *v5 = (int)v6;
  }
  return v8;
}
