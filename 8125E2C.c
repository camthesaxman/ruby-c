signed int sub_8125E2C()
{
  signed int result; // r0@2

  if ( dword_3004820 == 1 )
  {
    save_serialize_game();
    sub_81254C8();
    sub_812556C(((unsigned __int16)word_3005EB4 + 1) & 0xFFFF);
    result = 0;
  }
  else
  {
    result = 1;
  }
  return result;
}
