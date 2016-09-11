int BuildStartMenuActions_Normal()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( (unsigned __int8)FlagGet(0x801u) == 1 )
    AddStartMenuAction(0);
  if ( (unsigned __int8)FlagGet(0x800u) == 1 )
    AddStartMenuAction(1u);
  AddStartMenuAction(2u);
  if ( (unsigned __int8)FlagGet(0x802u) == 1 )
    AddStartMenuAction(3u);
  AddStartMenuAction(4u);
  AddStartMenuAction(5u);
  AddStartMenuAction(6u);
  AddStartMenuAction(7u);
  return v1;
}
