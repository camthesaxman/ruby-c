int sub_80ECC08()
{
  int v0; // r0@5
  int v2; // [sp+8h] [bp-4h]@0

  if ( v2000304 )
  {
    if ( v2000304 == 1 && !(sub_80F1E6C() << 24) )
      sub_80EBDBC((int)sub_80EC9A8);
  }
  else if ( sub_80EEC90() << 24 )
  {
    audio_play(5u);
    v0 = sub_80EF428(2, v2006DAD);
    sub_80EED9C(v0);
  }
  else if ( word_300179E & 1 )
  {
    audio_play(5u);
    if ( (unsigned int)v2006DAD <= 5 )
    {
      switch ( v2006DAD )
      {
        case 0:
          v20087D8 = 22;
          break;
        case 1:
          v20087D8 = 23;
          break;
        case 2:
          v20087D8 = 24;
          break;
        case 3:
          v20087D8 = 33;
          break;
        case 4:
          v20087D8 = 47;
          break;
        case 5:
          sub_80EBDBC((int)sub_80EC9A8);
          return v2;
        default:
          break;
      }
    }
    v2006DFC = v2006DAD;
    v20076AA = 1;
    sub_80EBDBC((int)sub_80ED01C);
  }
  else if ( word_300179E & 2 )
  {
    audio_play(5u);
    v2006DAD = 5;
    ++v2000304;
  }
  return v2;
}
