_BOOL4 sub_80B7004()
{
  unsigned __int8 v0; // r0@1
  int v1; // r0@1
  signed int v2; // r4@1
  int v3; // r0@2
  unsigned int v4; // r0@5
  __int16 v6; // [sp+0h] [bp-10h]@1
  __int16 v7; // [sp+2h] [bp-Eh]@1

  sub_80B6858(&v6, &v7);
  v0 = sub_80B67EC(v6);
  v6 = v0;
  v1 = (unsigned __int8)sub_80B7768(v0, v7);
  v2 = 1;
  if ( v1 == 255 )
  {
    v3 = sub_80B7104(255);
  }
  else
  {
    if ( v1 != 254 )
    {
      v4 = sub_80B7174(v1);
      goto _080B705A;
    }
    v3 = sub_80B713C(254);
  }
  v4 = v3 << 24;
  v2 = v4 >> 24;
_080B705A:
  sub_80B7960(v4);
  audio_play(5u);
  return v2 && (unsigned __int8)sub_80B6F84() == *(_BYTE *)(v2000034 + 1) - 1;
}
