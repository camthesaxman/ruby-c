int sub_809538C()
{
  int v0; // r2@2
  int v2; // [sp+8h] [bp-4h]@0

  while ( (unsigned __int8)sub_806B124() != 1 )
  {
    if ( (sub_80F9344() & 0xFF) == 1 )
      return v2;
  }
  sub_806C994(v201B260, v20384F0);
  sub_806BF74(v201B260, 0);
  GetMonNickname((int)&dword_3004360[25 * v20384F0], (int)&gStringVar1);
  sub_8095050(v201B260, v20384F0, v0);
  SetTaskFuncWithFollowupFunc(v201B260, (int)sub_8095408, (int)sub_8095118);
  SetMainCallback2((int)sub_806AEDC);
  return v2;
}
