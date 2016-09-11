int sub_80BDE48()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( (unsigned int)v202E8CE - 1 <= 6 )
  {
    switch ( v202E8CE )
    {
      case 1u:
        sub_80BE5FC();
        break;
      case 2u:
        sub_80BE65C();
        break;
      case 3u:
        sub_80BE6A0();
        break;
      case 4u:
        nullsub_21();
        break;
      case 6u:
        sub_80BE188();
        break;
      case 7u:
        sub_80BE320();
        break;
      default:
        return v1;
    }
  }
  return v1;
}
