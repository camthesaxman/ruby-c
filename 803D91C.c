int __fastcall pokemon_catch(int a1)
{
  int v1; // r6@1
  signed int i; // r5@1

  v1 = a1;
  SetMonData(a1, 7, 33705636);
  SetMonData(v1, 49, 33705644);
  SetMonData(v1, 1, 33705646);
  for ( i = 0; i <= 5; ++i )
  {
    if ( !GetMonData((int)&unk_3004360 + 100 * i, 11, 0) )
    {
      CopyMon((int)&unk_3004360 + 100 * i, v1, 100);
      byte_3004350 = i + 1;
      return 0;
    }
  }
  return (unsigned __int8)sub_803D998(v1);
}
