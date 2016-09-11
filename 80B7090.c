int sub_80B7090()
{
  unsigned __int8 v0; // r0@1
  int v1; // r5@1
  int v2; // r7@1
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r0@3
  int v7; // [sp+10h] [bp-4h]@0

  v0 = sub_80B6F84();
  v1 = v0;
  v2 = v0;
  v3 = *(_BYTE *)(v0 + 0x2000011);
  v4 = *(_BYTE *)(v0 + 0x2000011);
  if ( sub_80B7198(v3) << 24 )
  {
    if ( sub_80B7264(v3) << 24 )
      v5 = sub_80B7370(v3, v1);
    else
      v5 = sub_80B73CC(v3, v1);
  }
  else if ( sub_80B71E4(v3) << 24 )
  {
    v5 = sub_80B7474(v3, v1);
  }
  else
  {
    v5 = sub_80B72A4(v4, v2);
  }
  sub_80B7960(v5);
  audio_play(5u);
  return v7;
}
