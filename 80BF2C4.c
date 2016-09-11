int sub_80BF2C4()
{
  int v1; // [sp+0h] [bp-4h]@0

  v202E8DC = 0;
  if ( (unsigned int)v202E8CE - 1 <= 6 )
  {
    switch ( v202E8CE )
    {
      case 1u:
        sub_80BF334();
        break;
      case 2u:
        sub_80BF3A4();
        break;
      case 3u:
        sub_80BF3DC();
        break;
      case 4u:
        sub_80BF46C();
        break;
      case 5u:
        sub_80BF478();
        break;
      case 6u:
        sub_80BF484();
        break;
      case 7u:
        sub_80BF4BC();
        break;
      default:
        return v1;
    }
  }
  return v1;
}
