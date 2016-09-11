signed int snowflake_remove()
{
  signed int result; // r0@2
  int v1; // r0@3

  if ( v202FECC )
  {
    v1 = v202FECC - 1;
    --v202FECC;
    DestroySprite(*(_DWORD *)((4 * v1 & 0x3FF) + 0x202F848));
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
