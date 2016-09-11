int __fastcall task50_overworld_fanfare(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( word_30006DA )
  {
    --word_30006DA;
  }
  else
  {
    m4aMPlayContinue(&unk_3007380);
    DestroyTask(v1);
  }
  return v3;
}
