int sub_80E6AE4()
{
  int v0; // r0@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = sub_80E75D8();
  v2001087 = v0;
  if ( v0 << 24 )
    audio_play(5u);
  if ( word_300179E & 1 )
  {
    audio_play(5u);
    if ( v2001086 != v2001084 )
    {
      v2001027 = v2001083 * v2001086 + v2001085;
      sub_80E7574();
      sub_80E682C((int)sub_80E6F68);
      return v2;
    }
    if ( v2001085 == 1 )
    {
      sub_80E682C((int)sub_80E6C84);
      return v2;
    }
    if ( v2001085 > 1 )
    {
      if ( v2001085 == 2 )
      {
        sub_80E682C((int)sub_80E6D7C);
        return v2;
      }
    }
    else if ( !v2001085 )
    {
      sub_80E682C((int)sub_80E6BC0);
      return v2;
    }
  }
  if ( word_300179E & 2 )
    sub_80E682C((int)sub_80E6C84);
  return v2;
}
