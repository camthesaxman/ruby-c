int sub_8109C90()
{
  char *v0; // r2@1
  int v2; // [sp+Ch] [bp-4h]@0

  v202E8DC = 0;
  v0 = (char *)&gDecorations + 32 * v202E8CC;
  if ( (unsigned __int8)v0[19] != *((_BYTE *)&gDecorations + 32 * v202E8D0 + 19)
    && (char)sub_8133F9C((unsigned __int8)v0[19]) == -1 )
  {
    sub_80FE7D4(&gStringVar2, *((_BYTE *)&gDecorations + 32 * v202E8CC + 19));
    v202E8DC = 1;
  }
  return v2;
}
