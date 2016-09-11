signed int sub_80A34B4()
{
  while ( (unsigned __int8)sub_80A317C() != 1 )
  {
    if ( (sub_80F9344() & 0xFF) == 1 )
      return 0;
  }
  byte_3000700 = 0;
  ResetTasks();
  return 1;
}
