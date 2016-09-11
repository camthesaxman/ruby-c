int sub_803DD20()
{
  signed int v0; // r4@1

  v0 = 0;
  do
  {
    if ( !GetMonData((int)&unk_3004360 + 100 * v0, 11, 0) )
      return 0;
    ++v0;
  }
  while ( v0 <= 5 );
  return (unsigned __int8)sub_803DD54();
}
