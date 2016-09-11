char *sub_80082EC()
{
  char *result; // r0@1

  gSavedLinkPlayerCount = 0;
  result = &gSavedMultiplayerId;
  gSavedMultiplayerId = 0;
  return result;
}
