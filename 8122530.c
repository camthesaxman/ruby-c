int sub_8122530()
{
  int v1; // [sp+8h] [bp-4h]@0

  while ( (unsigned __int8)sub_806B124() != 1 )
  {
    if ( (unsigned __int8)sub_80F9344() == 1 )
      return v1;
  }
  sub_806C994(v201B260, v20384F0);
  sub_806C658(v201B260, 0);
  GetMonNickname((int)&dword_3004360[25 * v20384F0], (int)&gStringVar1);
  byte_3005CE0 = v20384F0;
  sub_81221F8(v201B260);
  SetMainCallback2((int)sub_806AEDC);
  return v1;
}
