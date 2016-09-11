int b_link_standby_message()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( v20239F8 & 2 )
  {
    word_30042A4 = 0;
    word_30042A0 = 0;
    sub_8002EB0((int)&unk_3004210, (int)&gUnknown_08400CE0, 144, 2, 0xFu);
  }
  return v1;
}
