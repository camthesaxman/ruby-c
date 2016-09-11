int sound_something()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( (unsigned __int8)byte_30006D8 <= 7u )
  {
    switch ( byte_30006D8 )
    {
      case 1:
        byte_30006D8 = 2;
        sub_8075474((unsigned __int16)word_30006D4);
        break;
      case 5:
        if ( sub_8075028() << 24 )
        {
          word_30006D6 = 0;
          byte_30006D8 = 0;
        }
        break;
      case 6:
        if ( sub_8075028() << 24 && task_is_not_running_overworld_fanfare() << 24 )
        {
          word_30006D4 = word_30006D6;
          word_30006D6 = 0;
          byte_30006D8 = 2;
          sub_8075474((unsigned __int16)word_30006D4);
        }
        break;
      case 7:
        if ( sub_8075028() << 24 && task_is_not_running_overworld_fanfare() << 24 )
        {
          sub_8074F6C((unsigned __int16)word_30006D6, (unsigned __int8)byte_30006D9);
          word_30006D4 = word_30006D6;
          word_30006D6 = 0;
          byte_30006D8 = 2;
          byte_30006D9 = 0;
        }
        break;
      default:
        return v1;
    }
  }
  return v1;
}
