int __fastcall sub_8080DC4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8080E70() == 1 )
  {
    DestroyTask(v1);
    CreateTask((int)sub_80712B4, 80);
  }
  return v3;
}
