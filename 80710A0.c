int sub_80710A0()
{
  int v1; // [sp+0h] [bp-4h]@0

  AddStartMenuAction(1u);
  AddStartMenuAction(2u);
  if ( (unsigned __int8)FlagGet(0x802u) == 1 )
    AddStartMenuAction(3u);
  AddStartMenuAction(9u);
  AddStartMenuAction(6u);
  AddStartMenuAction(7u);
  return v1;
}
