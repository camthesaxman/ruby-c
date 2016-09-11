int sub_809789C()
{
  int v0; // r0@4
  unsigned int v1; // r0@5
  int v2; // r0@7
  int v3; // r0@9
  int v4; // r0@10
  int v6; // [sp+4h] [bp-4h]@0

  if ( v2000004 )
  {
    if ( v2000004 == 1 )
    {
      v1 = (signed __int16)(sub_809CF30() + 1);
      if ( v1 <= 0xC )
      {
        switch ( v1 )
        {
          case 0u:
          case 1u:
            v2 = sub_809A860(1);
            sub_8098A5C(v2);
            sub_8096BE0((int)sub_8096C84);
            break;
          case 0xCu:
            audio_play(5u);
            sub_8096BE0((int)sub_8097B44);
            break;
          case 0xBu:
            v3 = audio_play(5u);
            sub_8098A5C(v3);
            sub_8096BE0((int)sub_8097974);
            break;
          case 0xAu:
            v4 = audio_play(5u);
            sub_8098A5C(v4);
            sub_8096BE0((int)sub_8097A64);
            break;
          default:
            return v6;
        }
      }
    }
  }
  else
  {
    v0 = sub_8098898(1);
    sub_809CE84(v0);
    ++v2000004;
  }
  return v6;
}
