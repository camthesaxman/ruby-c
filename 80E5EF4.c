int sub_80E5EF4()
{
  char v0; // r0@2
  int result; // r0@3
  signed __int16 v2; // [sp+0h] [bp-Ch]@2

  result = 1;
  if ( !(v202E858 & 0x18) )
  {
    PlayerGetDestCoords(&v2, &v2 + 1);
    v0 = MapGridGetMetatileBehaviorAt(v2, *(&v2 + 1));
    if ( !(IsRunningDisallowedByMetatile(v0) << 24) )
      result = 0;
  }
  return result;
}
