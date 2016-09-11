int sp0B9_daycare_relationship_comment()
{
  int v0; // r0@1
  signed int v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = (unsigned __int8)daycare_relationship_score_from_savegame();
  v1 = 0;
  if ( !v0 )
    v1 = 3;
  if ( v0 == 20 )
    v1 = 2;
  if ( v0 == 50 )
    v1 = 1;
  if ( v0 == 70 )
    v1 = 0;
  StringCopy(&gStringVar4, *(&gUnknown_08209AC4 + v1));
  return v3;
}
